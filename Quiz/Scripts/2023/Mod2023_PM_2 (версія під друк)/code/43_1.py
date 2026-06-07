try:
    a,b,c=6,8,9
    def h(a,b,c):
        print(a,b,c,end=" ")
    
    h(1,c=3)
    print(a,b,c)
    
except: print('error')
