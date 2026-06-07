try:
    a,b,c=7,6,8
    def h(a,b=9,c=7):
        print(a,b,c,end=" ")
    
    h(c=5,a=3,b=1)
    print(a,b,c)
    
except: print('error')
