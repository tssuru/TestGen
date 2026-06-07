try:
    a,b,c=3,9,5
    def h(a):
        a-=4
        b=1
        c=2
        return a+b+c
    
    a,b,c=1,8,6
    print(h(a),a,b,c)
    
except: print('error')
