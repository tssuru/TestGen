try:
    
    a,b,c=8,9,6
    def h(a,b=7,c):
        print(a,b,c,end="")
    
    h(b=5,a=1,b=3)
    print(a,b,c)
    
except: print('error')
