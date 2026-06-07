try:
    
    a,b,c=6,9,8
    def h(a,b=7,c):
        print(a,b,c,end="")
    
    h(0,4,c=2)
    print(a,b,c)
    
except: print('error')
