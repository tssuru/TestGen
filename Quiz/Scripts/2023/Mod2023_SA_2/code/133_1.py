try:
    a,b,c=8,6,9
    def g(a,b=7,c):
        print(a,b,c,end=" ")
    
    g(a=2,0,c=4)
    print(a,b,c)
    
except: print('error')
