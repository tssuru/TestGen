try:
    
    a,b,c=6,7,8
    def g(a,b=6,c=9):
        print(a,b,c,end="")
    
    g(b=1,c=4,3)
    print(a,b,c)
    
except: print('error')
