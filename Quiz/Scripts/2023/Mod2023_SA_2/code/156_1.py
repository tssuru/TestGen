try:
    a,b,c=9,6,8
    def h(a,b,c=7):
        print(a,b,c,end=" ")
    
    h(a=4,3,a=5)
    print(a,b,c)
    
except: print('error')
