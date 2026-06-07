try:
    
    a,b,c=6,8,9
    def h(a,b=6,c=7):
        print(a,b,c,end="")
    
    h(b=5,a=4,c=1)
    print(a,b,c)
    
except: print('error')
