try:
    
    a,b,c=8,6,8
    def g(a,b=7,c=9):
        print(a,b,c,end="")
    
    g(2,4,3)
    print(a,b,c)
    
except: print('error')
