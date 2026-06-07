try:
    
    a,b,c=9,8,6
    def g(a,b,c):
        print(a,b,c,end="")
    
    g(4,c=2)
    print(a,b,c)
    
except: print('error')
