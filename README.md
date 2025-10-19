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
- [Known Issues & Workarounds](#known-issues--workarounds)
- [Feedback and Support](#feedback-and-support)

---

## Overview
- **What is this?** A specialized packaging of the Imagination University **RVfpga 3.0** course material, adapted to Sheffield’s teaching flow and common FPGA boards. It offers a simple, consistent scaffold for both **learning** and **project development**.
- **Scope**: Core RVfpga 3.0 content is untouched; we add extra guides, board ports, and helper tools to reduce setup friction.
- **New materials** live under `University_Extensions/` and in board‑specific repos listed below.

---

## Repository Map
> You’ll typically work inside **one board repo** (create your own copy from a template), while the **Local‑Copy** repo is the landing hub for materials.

- **Main (materials hub)** - **you are here**  
  [**RVFPGA-3-0-Local-Copy**](https://github.com/Kitsudora/RVFPGA-3-0-Local-Copy)
  - Contains the complete teaching materials and extra utilities aggregated for the course.

- **Board targets** (create your project from these):
  - [**Nexys A7 (DDR, EH1)**](https://github.com/Kitsudora/board-nexys-a7-ddr-eh1)
  - [**Nexys A7 (NoDDR, EL2)**](https://github.com/Kitsudora/board-nexys-a7-noddr-el2)
  - [**Nexys A7 (DDR, EL2)**](https://github.com/Kitsudora/board-nexys-a7-ddr-el2)
  - [**Basys3 (EL2)**](https://github.com/Kitsudora/board-basys3-el2)
  - [**Boolean (EL2)**](https://github.com/Kitsudora/board-boolean-el2)
  - [**Nexys Video (DDR3, EL2)**](https://github.com/Kitsudora/board-nexys-video-a7-noddr-el2)
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

The RVfpga toolchain and build system are natively developed for **Linux**,  
so both **Windows** and **macOS** users are advised to use a Linux-based environment for project development and simulation.

If you are not familiar with Ubuntu or Linux, you can start by installing Ubuntu and learning the basic command-line operations.  Here is an introductory guide:  
- [Ubuntu Basics for Beginners (official documentation)](https://ubuntu.com/tutorials/command-line-for-beginners#1-overview)

---

### For Windows Users

The official RVfpga materials recommend using **Cygwin**, which provides a Linux-like environment within Windows.  
Cygwin supports the required build tools and scripts and is fully compatible with the official teaching materials.  

> **Note:** You can also use **WSL2 (Windows Subsystem for Linux 2)** with **Ubuntu 22.04**. This setup allows convenient access to shared files between Linux and Windows, and avoids the performance limitations of running Vivado inside a virtual machine. The official materials do **not** include setup instructions for WSL2, and it requires manual installation and configuration of all dependencies.

---

### For macOS Users

For macOS, the recommended approach is to use the **official RVfpga Virtual Machine**,  
which provides an Ubuntu 22.04 LTS environment preconfigured for RVfpga development (excluding Vivado).  
The VM can be executed in **VirtualBox** or **VMWare**, using the distributed `.ova` image that follows the Open Virtualization Format 1.0 standard.

> **Note:** The official virtual machine is based on an **x86 Ubuntu image** and therefore cannot be used  with **VirtualBox** on Apple Silicon (M1/M2/M3) systems. In these cases, use **UTM** (free, QEMU-based) or **Parallels Desktop** (commercial) instead. Both options can provide a functional Linux environment for RVfpga development.

This setup provides a ready-to-use environment for the software and simulation components of RVfpga,  
while **Vivado** should still be installed separately on the host system for FPGA synthesis and bitstream generation.

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
3. **Build or configuration path errors (e.g., `get_filename_component` issues)**  
   When building or compiling certain projects (for example, **Al_operation**), you may encounter errors such as  
   `get_filename_component called with incorrect number of arguments`  
   or other messages indicating that a configuration path cannot be found.  
   This typically occurs because some toolchain paths or project settings have not been loaded properly.  

   **Workaround:**  
   Add a `settings.json` file under your `.vscode` directory and include the following content:  

   ```json
   {
     "cmake.configureArgs": [
       "-DCMAKE_TOOLCHAIN_FILE=<catapult-sdk_xxxx.x.x>/build/riscv-toolchain-gcc-elf.cmake",
       "-DPLATFORM=-RVFPGANEXYS_EL2_NODDR"  // your target platform
     ]
   }
   ```

   Similarly, if you encounter other missing-path or configuration-related errors during build or compile steps,  
   you can add the corresponding parameters here to resolve them.

4. **Catapult SDK version and UI inconsistencies**  
   The **Catapult SDK** interface and naming conventions differ slightly from those described in the documentation.  
   **Workaround:** Make sure to use the correct Catapult SDK version.The version used in the course materials is **Catapult-sdk_1.9.1**, available at <https://github.com/imgtec-riscv/catapult-sdk/releases/tag/v1.9.1>

   When switching to a different version, update your environment variables to match the new installation path.  
   Version **v2024.3.0** can still be used with RVfpga, but the configuration process and UI layout may differ slightly.

---
## Feedback and Support

If you encounter any issues — such as documentation errors, environment setup problems, or unexpected behavior —  
please open an **Issue** on the repository.  
We’ll review your report, provide assistance, and update the materials accordingly.


*Happy hacking, and remember: check the official vendor/course docs first—they already cover most issues you’ll encounter.*

( , ; )
