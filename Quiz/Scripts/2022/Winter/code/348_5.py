try:
    
    a,b,c=6,8,7
    def h(a,b,c=9):
        print(a,b,c,end="")
    
    h(c=5,a=1,c=0)
    print(a,b,c)
    
except: print('error')
