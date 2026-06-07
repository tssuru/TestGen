try:
    
    a,b,c=8,9,6
    def g(a,b=7,c):
        print(a,b,c,end="")
    
    g(1,4,5)
    print(a,b,c)
    
except: print('error')
