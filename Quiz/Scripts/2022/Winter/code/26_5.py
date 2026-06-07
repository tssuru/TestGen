try:
    
    a,b,c=9,7,8
    def h(a,b=6,c=9):
        print(a,b,c,end="")
    
    h(b=2,c=0,1)
    print(a,b,c)
    
except: print('error')
