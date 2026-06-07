try:
    
    a,b,c=8,6,9
    def h(a,b=8,c):
        print(a,b,c,end="")
    
    h(1,b=0)
    print(a,b,c)
    
except: print('error')
