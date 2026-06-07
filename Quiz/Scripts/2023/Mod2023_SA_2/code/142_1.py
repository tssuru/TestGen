try:
    a,b,c=6,7,8
    def h(a,b=9,c=8):
        print(a,b,c,end=" ")
    
    h(a=0,4,a=3)
    print(a,b,c)
    
except: print('error')
