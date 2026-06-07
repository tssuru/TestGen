try:
    a,b,c=7,6,8
    def h(a,b=9,c=6):
        print(a,b,c,end=" ")
    
    h(b=1,c=2,b=3)
    print(a,b,c)
    
except: print('error')
