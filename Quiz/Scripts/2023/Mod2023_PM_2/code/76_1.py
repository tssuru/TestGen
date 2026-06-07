try:
    a,b,c=8,7,6
    def f(a,b,c=6):
        print(a,b,c,end=" ")
    
    f(4,b=5)
    print(a,b,c)
    
except: print('error')
