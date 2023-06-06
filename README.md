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
