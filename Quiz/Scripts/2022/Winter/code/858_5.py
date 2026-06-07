try:
    
    a,b,c=9,6,7
    def h(a,b=8,c):
        print(a,b,c,end="")
    
    h(5,4,a=1)
    print(a,b,c)
    
except: print('error')
