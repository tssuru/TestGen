try:
    
    a,b,c=8,8,7
    def h(a,b=6,c=9):
        print(a,b,c,end="")
    
    h(a=0,3,a=4)
    print(a,b,c)
    
except: print('error')
