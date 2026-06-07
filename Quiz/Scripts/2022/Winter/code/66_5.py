try:
    
    a,b,c=9,8,6
    def g(a,b,c):
        print(a,b,c,end="")
    
    g(2,c=1)
    print(a,b,c)
    
except: print('error')
