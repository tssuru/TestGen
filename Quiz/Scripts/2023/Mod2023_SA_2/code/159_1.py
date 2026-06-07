try:
    a,b,c=6,7,9
    def f(a,b,c):
        print(a,b,c,end=" ")
    
    f(2,c=4,b=0)
    print(a,b,c)
    
except: print('error')
