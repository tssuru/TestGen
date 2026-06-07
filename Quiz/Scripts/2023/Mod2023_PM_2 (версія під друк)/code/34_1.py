try:
    a,b,c=8,6,7
    def g(a,b=8,c):
        print(a,b,c,end=" ")
    
    g(2,4)
    print(a,b,c)
    
except: print('error')
