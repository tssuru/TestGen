try:
    
    a,b,c=8,6,7
    def h(a,b=8,c):
        print(a,b,c,end="")
    
    h(0,2)
    print(a,b,c)
    
except: print('error')
