try:
    a,b,c=6,7,8
    def h(a,b,c):
        print(a,b,c,end=" ")
    
    h(4,c=3,b=0)
    print(a,b,c)
    
except: print('error')
