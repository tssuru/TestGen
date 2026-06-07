try:
    
    a,b,c=7,9,6
    def g(a,b,c):
        print(a,b,c,end="")
    
    g(3,0,a=4)
    print(a,b,c)
    
except: print('error')
