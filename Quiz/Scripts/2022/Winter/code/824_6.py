try:
    a,b,c=8,6,3
    def h(a):
        global c
        a=1
        b*=4
        c=2
        return a+b+c
    
    a,b,c=5,4,1
    print(h(a),a,b,c)
    
except: print('error')
