try:
    
    a,b,c=6,7,8
    def h(a,b,c=9):
        print(a,b,c,end="")
    
    h(a=0,4,a=0)
    print(a,b,c)
    
except: print('error')
