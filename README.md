# RvFPGA‑Custom Edition

> A course‑oriented, board‑friendly edition of RVfpga 3.0, tailored for the University of Sheffield teaching and student projects.

This repository aggregates curated learning materials and lightweight tooling around RVfpga 3.0. It keeps **RVfpga 3.0 core content unchanged** while adding **extensions** (extra docs, board targets and utilities) to make labs and projects easier to start and maintain.

---

## Table of Contents
- [Overview](#overview)
- [Repository Map](#repository-map)
- [Quick Start](#quick-start)
  - [Repo Rules (Students)](#repo-rules-students)
  - [Repo Rules (Maintainers)](#repo-rules-maintainers)
  - [Are you here to learn or to develop?](#are-you-here-to-learn-or-to-develop)
- [Git & GitHub Guide](#git--github-guide)
- [Tools](#tools)
  - [rv_spi_mini](#rv_spi_mini)
  - [wb_intercon](#wb_intercon)
- [Updates](#updates)

---

## Overview
- **What is this?** A specialized packaging of the Imagination University **RVfpga 3.0** course material, adapted to Sheffield’s teaching flow and common FPGA boards. It offers a simple, consistent scaffold for both **learning** and **project development**.
- **Scope**: Core RVfpga 3.0 content is untouched; we add extra guides, board ports, and helper tools to reduce setup friction.
- **New materials** live under `University_Extensions/` and in board‑specific repos listed below.

---

## Repository Map
> You’ll typically work inside **one board repo** (create your own copy from a template), while the **Local‑Copy** repo is the landing hub for materials.

- **Main (materials hub)** — **you are here**  
  **RVFPGA-3-0-Local-Copy** → <https://github.com/Kitsudora/RVFPGA-3-0-Local-Copy>
  - Contains the complete teaching materials and extra utilities aggregated for the course.

- **Board targets** (create your project from these):
  - **Nexys A7 (DDR, EH1)** — <https://github.com/Kitsudora/board-nexys-a7-ddr-eh1>
    - VeeRwolf **EH1** SoC port for Nexys A7 with **DDR2** access; includes `src/` and debugging assets in `common/`.
  - **Nexys A7 (NoDDR, EL2)** — <https://github.com/Kitsudora/board-nexys-a7-noddr-el2>
    - VeeRwolf **EL2** SoC port for Nexys A7 **without** DDR2; includes `src/` and `common/`.
  - **Nexys A7 (DDR, EL2)** — <https://github.com/Kitsudora/board-nexys-a7-ddr-el2>
    - VeeRwolf **EL2** SoC port for Nexys A7 **with** DDR2; includes `src/` and `common/`.
  - **Basys3 (EL1)** — <https://github.com/Kitsudora/board-basys3-el2>
    - VeeRwolf **EL1** SoC port for Basys3; includes `src/` and `common/`.
  - **Boolean (EL1)** — <https://github.com/Kitsudora/board-boolean-el2>
    - VeeRwolf **EL1** SoC port for Boolean board; includes `src/` and `common/`.
  - **Nexys Video (EL2, DDR3)** — <https://github.com/Kitsudora/board-nexys-video-a7-noddr-el2>
    - VeeRwolf **EL2** SoC port for Nexys Video **with DDR3**; includes `src/`, `common/`, and Catapult SDK config (`nexysvideoconfig/`).  
    *This is additional content beyond the vanilla course.*

---

## Quick Start

### Repo Rules (Students)
- **Do not push** changes to the upstream organization repos. Create your own project via **Use this template**.
- Keep the upstream `main` layout intact in your project unless you’re explicitly updating build/sim configuration paths.
- **Read the official docs first** — most issues you’ll hit are already covered by vendor and course documentation.

### Repo Rules (Maintainers)
- Students should have **read‑only** access to the **main** repo and **all board repos**.
- Require students to create **organization‑owned** project repos via **Use this template**, granting write access to the student/team while preserving upstream as read‑only.

### Are you here to learn or to develop?

#### If you’re here to **learn**
Clone the materials hub and follow the labs/examples.
```bash
git clone https://github.com/Kitsudora/RVFPGA-3-0-Local-Copy.git
```

#### If you’re here to **develop** (recommended: **Use this template**)
Create your own project repo from the relevant **board** repository:
1. Open the board repo you need (e.g. <https://github.com/Kitsudora/board-nexys-a7-ddr-el2>).
2. Click **Use this template** → **Create a new repository**.
3. Fill the form:
   - **Owner**: choose your account or **an organization** (**recommended**) for team workflows & permissions.
   - **Repository name**: e.g. `rvfpga-nexys-video-labs`.
   - **Description**: short purpose line.
   - **Visibility**: **Private** (recommended for coursework);
   - **Include all branches**: usually leave as default (`main` only). Enable if you explicitly need all platform branches.
4. Click **Create repository from template**.
5. Clone your new repo locally and start customizing:
```bash
git clone https://github.com/<your-org-or-account>/<your-repo>.git
cd <your-repo>
```
6. (Optional) Add **upstream** to pull future updates from the original board repo (example for Nexys A7 DDR EL2):
```bash
git remote add upstream https://github.com/Kitsudora/board-nexys-a7-ddr-el2.git
git fetch upstream
git merge upstream/main   # or: git rebase upstream/main
```
> **Note**: This project does **not** provide a "main‑repo template" path; always start from a **board** repository.

---

## Git & GitHub Guide
- **Git**: distributed version control system for tracking changes, branching and merging.  
  Start here → Official tutorial: <https://git-scm.com/docs/gittutorial>
- **GitHub**: hosting & collaboration platform on top of Git.  
  Start here → Get started: <https://docs.github.com/en/get-started>
- **Create from template** (recommended workflow):  
  Guide → <https://docs.github.com/en/repositories/creating-and-managing-repositories/creating-a-repository-from-a-template>
- Prefer videos? There are plenty of excellent walkthroughs on YouTube covering Git basics, branching, PRs, and template workflows.

---

## Tools
Lightweight helpers included in this repo to speed up peripheral control and interconnect generation.

### rv_spi_mini
A minimal driver tailored for the `simple_spi` core used in RVfpga designs, providing a more direct and lightweight SPI API for labs and quick prototyping.  
**Docs** → [`tools/rv_spi_mini/README.md`](tools/rv_spi_mini/README.md)

### wb_intercon
A generator for **Wishbone** interconnects to automate bus topology wiring between modules.  
This project pins to a **specific** upstream commit (not the latest):  
<https://github.com/olofk/wb_intercon/tree/1250154467e4a5658043f4be3945fc15a7808551>  
**Docs** → [`tools/wb_intercon/README.md`](tools/wb_intercon/README.md)

---

## Updates
A summary of what’s added/changed compared to the vanilla RVfpga 3.0 package.

- **Added University materials** under `University_Extensions/`.
- **Expanded tutorials** with more detailed lab guidance and development notes.
- **New board support**: **Nexys Video** (EL2, DDR3) port integrated and validated.
- **Docs & labs updated** for the Nexys Video platform to align with the course framework.
- **Repository structure refactor**: split board development into separate repos to improve reuse and maintainability.

---

*Happy hacking, and remember: check the official vendor/course docs first—they already cover most issues you’ll encounter.*

( , ; )