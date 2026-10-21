# GitHub repository setup: from creation to completion

## 1. Prepare the project folder

1. Download and extract the project package.
2. Open the extracted `can-vehicle-monitoring` folder.
3. Review `README.md`, `src/`, `include/`, and `docs/`.
4. Add only genuine output photos/videos to `media/`.
5. Do not upload private credentials, personal data, or unrelated toolchain binaries.

## 2. Create a repository on GitHub

1. Sign in to GitHub.
2. Select **New repository**.
3. Use a name such as `can-vehicle-monitoring` or `multi-node-can-vehicle-safety`.
4. Add a short description: `Multi-node LPC2129 CAN vehicle monitoring and reverse safety prototype`.
5. Choose **Public** if you want recruiters/interviewers to view it, or **Private** if you want to review it first.
6. Do not initialize with a README if you are uploading this package's existing README.
7. Create the repository.

## 3. Upload through the GitHub website (no Git installation needed)

1. Open the new empty repository.
2. Choose **Add file → Upload files**.
3. Extract the downloaded ZIP locally first; upload the *contents* of the project folder, not the ZIP file itself.
4. Preserve the directory structure: `src/`, `include/`, `docs/`, `media/`, and `examples/`.
5. Enter a commit message such as `Add initial CAN vehicle monitoring project`.
6. Select **Commit changes**.
7. Open the repository page and check that the README renders and the block diagram appears.

GitHub's web upload is suitable for a small source repository. If the browser refuses a large video, use a Git client or host the video separately and link it from the README.

## 4. Upload with Git (recommended for future updates)

Install Git, open a terminal in the extracted project directory, then run:

```bash
git init
git add .
git status
git commit -m "Add CAN vehicle monitoring project"
git branch -M main
git remote add origin https://github.com/YOUR-USERNAME/YOUR-REPOSITORY.git
git push -u origin main
```

Replace `YOUR-USERNAME` and `YOUR-REPOSITORY` with the actual values from GitHub. Do not paste the example URL unchanged.

For later changes:

```bash
git add README.md src include docs media
git status
git commit -m "Document hardware test results"
git push
```

## 5. Add output photos and videos

Use real output captures from your own hardware:

- `media/screenshots/main-node-lcd.jpg`
- `media/screenshots/left-indicator-leds.jpg`
- `media/screenshots/right-indicator-leds.jpg`
- `media/screenshots/reverse-alert-close-obstacle.jpg`
- `media/videos/reverse-alert-demo.mp4`

Use filenames that accurately describe the captured result. Then add relative Markdown links to the README and commit the media files. Do not claim an output was observed unless it was actually captured.

## 6. Final repository review

- [ ] README opens and renders without broken image links.
- [ ] The block diagram is visible.
- [ ] Source and header files are present in the intended folders.
- [ ] Duplicate CAN driver source is not included twice in any target project.
- [ ] The three firmware images are built separately.
- [ ] Board, clock, pin mapping, CAN bit rate, and termination are documented.
- [ ] Real screenshots/videos are linked if available.
- [ ] Test results distinguish passed, failed, and not-yet-tested cases.
- [ ] Repository contains no passwords, keys, or personal documents.
- [ ] Commit history has meaningful messages.

## 7. Recommended release milestone

After compiling and testing the three nodes, create a GitHub Release named `v1.0-hardware-demo` and include:
- Toolchain/compiler version.
- MCU board details and clock configuration.
- CAN bit rate.
- Test checklist with results.
- A short demo video link.
- Any known issues that remain.
