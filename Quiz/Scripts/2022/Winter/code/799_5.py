try:
    
    a,b,c=7,8,6
    def h(a,b,c=9):
        print(a,b,c,end="")
    
    h(b=2,c=3,2)
    print(a,b,c)
    
except: print('error')
