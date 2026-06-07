try:
    
    a,b,c=9,8,6
    def g(a,b=7,c):
        print(a,b,c,end="")
    
    g(5,4,2)
    print(a,b,c)
    
except: print('error')
