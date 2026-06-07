try:
    a,b,c=7,9,8
    def h(a,b,c):
        print(a,b,c,end=" ")
    
    h(3,b=1)
    print(a,b,c)
    
except: print('error')
