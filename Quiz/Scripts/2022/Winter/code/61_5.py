try:
    
    a,b,c=7,8,6
    def h(a,b,c=9):
        print(a,b,c,end="")
    
    h(0,a=2)
    print(a,b,c)
    
except: print('error')
