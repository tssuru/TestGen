try:
    
    a,b,c=6,9,7
    def h(a,b,c):
        print(a,b,c,end="")
    
    h(2,c=3,b=5)
    print(a,b,c)
    
except: print('error')
