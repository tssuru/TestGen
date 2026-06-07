try:
    
    a,b,c=8,9,7
    def h(a,b=6,c):
        print(a,b,c,end="")
    
    h(3,2,3)
    print(a,b,c)
    
except: print('error')
