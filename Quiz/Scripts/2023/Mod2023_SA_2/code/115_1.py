try:
    a,b,c=6,8,9
    def h(a,b,c):
        print(a,b,c,end=" ")
    
    h(5,c=2,b=1)
    print(a,b,c)
    
except: print('error')
