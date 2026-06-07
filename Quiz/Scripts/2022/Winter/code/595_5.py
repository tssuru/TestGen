try:
    
    a,b,c=9,7,9
    def h(a,b=6,c):
        print(a,b,c,end="")
    
    h(c=1,a=3,c=5)
    print(a,b,c)
    
except: print('error')
