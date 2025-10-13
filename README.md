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
- [Linux Environment](#linux-environment)
- [Tools](#tools)
  - [rv_spi_mini](#rv_spi_mini)
  - [wb_intercon](#wb_intercon)
- [Updates](#updates)
- [Known Issues & Workarounds](#known-issues-&-workarounds)
- [Feedback and Support](#feedback-and-support)

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
Download the latest **Release package** from the [Releases](../../releases) section instead of cloning the full repository.  
This package contains all lab materials, reference designs, and example projects needed for the course.

You may optionally set up your own **Git repository** to manage your local work and track progress.  
This is not required for coursework but is recommended for good version control practice.


#### If you’re here to **develop**
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

## Linux Environment
The official RVfpga materials are designed for a **Cygwin-based** setup under Windows, but **WSL2 (Windows Subsystem for Linux 2)** with **Ubuntu 22.04 LTS** (or Ubuntu 24.04) can also be used. Both environments provide compatible Linux functionality for building and running the FPGA projects.

> **Note:** The official course materials do **not** include WSL2 setup instructions.  
> This is an **optional extension**, recommended for students already familiar with Linux-based workflows.

If you are not familiar with Ubuntu or Linux, 
you can start by installing Ubuntu and familiarizing yourself with basic Linux commands and package management.  
Here are some general tutorials and documentation to help you get started:

- [Ubuntu Basics for Beginners (official documentation)](https://ubuntu.com/tutorials/command-line-for-beginners#1-overview)  

These resources cover navigating the command line, and managing files and packages, enough to get started comfortably within this environment.

---

## Tools
Lightweight helpers included in this repo to speed up peripheral control and interconnect generation.

### rv_spi_mini
A minimal driver tailored for the `simple_spi` core used in RVfpga designs, providing a more direct and lightweight SPI API for labs and quick prototyping.  
**Docs** → [`tools/rv_spi/README.md`](tools/rv_spi/README.md)

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

## Known Issues & Workarounds

This section documents a few environment-specific issues you may encounter during setup and simulation.

1. **Verilator 5 timing directive handling**  
   Verilator 5 requires an explicit decision on whether to include timing directives (e.g., `#1`) during compilation.  
   **Workaround:** You can either use **Verilator 4** or add the flag --no-timming to `VERILATOR_OPTIONS` in your Makefile to disable timing evaluation.

2. **GTKWave 4 Tcl script compatibility**  
  GTKWave 4 has temporarily removed support for `.tcl` scripts.  
  **Workaround:** Use **GTKWave 3** to maintain full compatibility with existing waveform and script setups.
---
## Feedback and Support

If you encounter any issues — such as documentation errors, environment setup problems, or unexpected behavior —  
please open an **Issue** on the repository.  
We’ll review your report, provide assistance, and update the materials accordingly.


*Happy hacking, and remember: check the official vendor/course docs first—they already cover most issues you’ll encounter.*

( , ; )
