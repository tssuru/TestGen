try:
    a,b,c=9,6,8
    def h(a,b=7,c=6):
        print(a,b,c,end=" ")
    
    h(0,2,3)
    print(a,b,c)
    
except: print('error')
