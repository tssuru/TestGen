try:
    
    a,b,c=7,6,8
    def h(a,b=9,c):
        print(a,b,c,end="")
    
    h(4,c=2)
    print(a,b,c)
    
except: print('error')
