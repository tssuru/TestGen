try:
    
    a,b,c=7,9,8
    def h(a,b,c=6):
        print(a,b,c,end="")
    
    h(c=2,a=3,a=1)
    print(a,b,c)
    
except: print('error')
