try:
    
    a,b,c=7,6,9
    def h(a,b=8,c):
        print(a,b,c,end="")
    
    h(2,0,a=1)
    print(a,b,c)
    
except: print('error')
