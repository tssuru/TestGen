try:
    
    a,b,c=9,6,8
    def g(a,b=7,c=9):
        print(a,b,c,end="")
    
    g(b=0,c=4,5)
    print(a,b,c)
    
except: print('error')
