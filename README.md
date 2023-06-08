# cat.c

만약 명령줄 인수가 없다면 표준 입력을 사용합니다.

그렇지 않다면 fopen(argv[1], "r"); 를 통해 read 전용의 파일을 엽니다.

while문을 통해 EOF(end of file)까지 문자를 읽고 화면에 출력합니다.

![이미지](https://blogfiles.pstatic.net/MjAyMzA2MDVfMTQy/MDAxNjg1OTczNjQ0NDI4.w0srjSKzYVpOhC0TV2eOFbyyX9hD7p-NQSnjHw-xeWYg.s652GpQ4lO-UkK81sTQiTYYASj7j49RrYSG9z-YRh_og.PNG.saehee0427/image.png)

# copy.c

cp과 동일 역할을 하는 명령어입니다.

받은 인자가 3개가 아닐 경우, copy를 사용하는 법을 출력합니다.

복사 할 파일이 없는 경우, error 메세지를 출력합니다.

정상적인 명령이 입력되면 복사할 파일(fp1)를 끝까지 읽어 fp2에 옮겨 적습니다.

아래 이미지에서 a.txt 가 복사된 것을 확인할 수 있습니다.

![이미지](https://blogfiles.pstatic.net/MjAyMzA2MDZfMTQw/MDAxNjg1OTc3NDIxNDE2._N467Gc5XNJRE6EydVh5wFVr35Zf8iaAtAyosCYzIe8g.YgFoSn-O_8J9KPP_Mo_Louitn-boP9xOdZ_BpPK5nbwg.PNG.saehee0427/image.png)

# ls.c

현 파일에 문서가 없다면 프린트 할 수 있는 문서가 없음을 알리는 문구를 프린트 합니다.

문서가 있다면 해당 문서의 이름을 전부 출력합니다.

![이미지](https://blogfiles.pstatic.net/MjAyMzA2MDZfMjI5/MDAxNjg2MDQyOTEwNDc5.-3NUku8WfTjZGi-yh_Gy29w1Rnk5kNx60uW4gFROxBYg.-srM5rGVHs12vRUwfyGrEKFIq-tciNZsKybYTayJz4cg.PNG.saehee0427/image.png)

# ftype.c

lstat 함수를 사용하여 파일 정보를 읽습니다.

문자열을 만들어 주소를 넘겨주는 방식을 사용합니다.

lstat 함수는 실패 또는 에러 시 -1을 return 하기 때문에 만약 lstat 함수가 0보다 작으면 perror를 띄웁니다.

성공 시, 각각의 파일 정보를 읽어들여 분류한 정보를 프린트합니다.

![이미지](https://blogfiles.pstatic.net/MjAyMzA2MDZfMjIy/MDAxNjg2MDQ5NjExOTM4.vHJ3xDKpIAgNk057cusVBsY5yQUuiyWbcTpG_aLBKg4g.ifKUbOS89A06NmZOw397Dulkikmy_2BUbtKMqEUkS1cg.PNG.saehee0427/image.png)

# fchmod.c

(원하는 권한 8진수로 입력) + (접근 권한을 바꾸려는 파일)의 형식으로 입력합니다.

만약 실패하면(return 값이 -1이 나오면) error 처리를 합니다.

![이미지](https://postfiles.pstatic.net/MjAyMzA2MDZfMjMg/MDAxNjg2MDU1MTM3NDc1.NlW6ngV5XZCSIeDWFalZR6ALReI0k3wBDQ5-C-QAmHEg.AqglXxrHPXdJ5nWQF9yA20_a_guIH2wIiDgJ6XXiP08g.PNG.saehee0427/image.png?type=w966)

# pwd.c

char \*buf에 작업 중인 디렉토리의 이름을 담고, size_t size로 버퍼의 크기를 정해줍니다.

작업 중인 디렉토리 이름을 가져오는 함수인 getcwd를 사용하여 pwd를 구현합니다.

성공 시 현재 작업 중인 디렉토리를 반환합니다. 실패 시 NULL 값을 반환하게 됩니다.

![이미지](https://blogfiles.pstatic.net/MjAyMzA2MDhfMTk3/MDAxNjg2MjE3MTU4Njky.NdkToKhOX86eABJMLrA34pWpCW4TVYdi-aqdBpxbTPQg.3EMBb7d4aIEK_PsICtz_NbGxQYfavUHZWqqAjQu29N8g.PNG.saehee0427/image.png)

# head.c

입력한 파일이 디렉토리 안에 없다면 "파일을 열 수 없습니다" 를 출력합니다.

while문을 이용해 지정한 라인 수 까지 or NULL이 아닐 때까지 파일을 읽어 라인대로 프린트합니다.

![이미지](https://blogfiles.pstatic.net/MjAyMzA2MDhfNjMg/MDAxNjg2MjI3OTU2NzY1.zOsq78jkQlDx1Nt7mlvigKpS8ALnTjojxRQzwlvNHB8g.Uc0r_f5l8GSVUBg15k-fvxRz200FpHp1ya7CwOoJeTgg.PNG.saehee0427/image.png)

# tail.c

큰 틀은 head.c와 유사합니다.

파일을 메모리에 가져와 역순으로 읽어서 출력합니다.

당연하게도... 역순으로 출력됩니다...

![이미지](https://blogfiles.pstatic.net/MjAyMzA2MDhfMjg3/MDAxNjg2MjMyNDUyODk4._7l13lRPqUQEd93LK-OQk7EU1P1PeUq5w6rdB3KuLSgg.hS0Rec0gccIL2dDfnlsKhxab3r_lfXfHoNaFpy6m1a0g.PNG.saehee0427/image.png)


