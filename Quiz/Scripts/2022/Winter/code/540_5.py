try:
    
    a,b,c=8,9,6
    def g(a,b=7,c):
        print(a,b,c,end="")
    
    g(0,3,a=4)
    print(a,b,c)
    
except: print('error')
