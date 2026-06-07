try:
    a,b,c=8,6,9
    def g(a,b=7,c):
        print(a,b,c,end=" ")
    
    g(a=4,b=0,c=5)
    print(a,b,c)
    
except: print('error')
