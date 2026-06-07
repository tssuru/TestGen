try:
    
    a,b,c=7,6,8
    def h(a,b=7,c=9):
        print(a,b,c,end="")
    
    h(a=5,2,a=3)
    print(a,b,c)
    
except: print('error')
