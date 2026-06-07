try:
    a,b,c=7,9,6
    def h(a,b,c=6):
        print(a,b,c,end=" ")
    
    h(1,3,b=0)
    print(a,b,c)
    
except: print('error')
