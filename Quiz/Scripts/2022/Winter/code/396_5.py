try:
    
    a,b,c=9,8,9
    def h(a,b=6,c=7):
        print(a,b,c,end="")
    
    h(b=2,c=5,3)
    print(a,b,c)
    
except: print('error')
