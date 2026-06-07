try:
    
    a,b,c=8,7,6
    def h(a,b,c=7):
        print(a,b,c,end="")
    
    h(5,2,3)
    print(a,b,c)
    
except: print('error')
