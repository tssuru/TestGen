try:
    
    a,b,c=9,8,7
    def h(a,b=6,c=9):
        print(a,b,c,end="")
    
    h(0,3)
    print(a,b,c)
    
except: print('error')
