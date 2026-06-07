try:
    a,b,c=9,7,6
    def f(a,b=8,c=9):
        print(a,b,c,end=" ")
    
    f(5,c=2,b=4)
    print(a,b,c)
    
except: print('error')
