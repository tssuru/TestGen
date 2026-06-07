try:
    a,b,c=9,8,9
    def h(a,b=6,c):
        print(a,b,c,end=" ")
    
    h(4,0,1)
    print(a,b,c)
    
except: print('error')
